const fs= require('fs');
const chalk= require('chalk');
const loadNotes= ()=>{
    try{
        const data= fs.readFileSync('notes.json').toString()
        return JSON.parse(data);
    }catch(e){
        return [];
    }
}

const saveNotes= (notes)=>fs.writeFileSync('notes.json',JSON.stringify(notes));


const addNotes= (title,body)=>{
    const notes= loadNotes();
    const duplicateNotes= notes.filter((note)=> note.title===title);
    if(duplicateNotes.length>0){
        console.log(chalk.red.bold.inverse('Note title taken!'));
        return;
    }
    notes.push({
        title: title,
        body: body
    });
    saveNotes(notes)
    console.log(chalk.green.bold.inverse('New note added!'));
}

const removeNote= (title)=>{
    const notes= loadNotes();
    const notesToKeep= notes.filter((note) => note.title!==title);
    if(notes.length===notesToKeep.length){
        console.log(chalk.red.bold.inverse('No note found!'));
        return;
    }
    saveNotes(notesToKeep); 
    console.log(chalk.green.bold.inverse('Note removed!'));
}
const listNotes= ()=>{
    const notes= loadNotes();
    if (notes.length===0){
        console.log(chalk.red.bold.inverse('No notes found!'));
        return;
    }
    console.log(chalk.blue.bold.inverse('Your notes'));
    notes.forEach((note)=>{
        console.log(note.title);
    });
}

const readNote= (title)=>{
    const notes= loadNotes();
    const read_note= notes.find((note)=> note.title===title);
    if(!read_note){
        console.log(chalk.red.bold.inverse('No note found!'));
        return;
    }
    console.log(chalk.blue.bold.inverse(read_note.title));
    console.log(read_note.body);
}
module.exports= {
    addNotes,
    removeNote,
    listNotes,
    readNote
};