const validator = require('validator');
const chalk = require('chalk');
const{ addNotes, removeNote, listNotes,readNote} = require('./notes.js');
const yargs = require('yargs');
yargs.version('1.1.0');

yargs.command({
    command: 'add',
    describe: 'Add a new note',
    builder: {
        title: {
            describe: 'Note title',
            demandOption: true,
            type:'string'
        },
        body: {
            describe: 'Note body',
            demandOption: true,
            type:'string'
        }
    },
    handler: (argv) => addNotes(argv.title,argv.body)
});

yargs.command({
    command: 'remove',
    describe: 'remove a note',
    builder: {
        title: { 
            describe: 'Note title',
            demandOption: true,
            type:'string'
        }
    },
    handler:(argv) => removeNote(argv.title)
});
yargs.command({
    command: 'list',
    describe: 'list a note',
    handler: () => listNotes()
});
yargs.command({
    command: 'read',
    describe: 'read a note',
    builder: {
        title: {
            describe: 'Note title',
            demandOption: true,
            type:'string'
        }
    },
    handler: (argv) => readNote(argv.title)
});

yargs.parse();