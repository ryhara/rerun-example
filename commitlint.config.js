module.exports = {
  extends: ['gitmoji'],
  rules: {
    "type-enum": [2, "always", ["feat", "fix", "docs", "style", "setting", "experiment", "remove", "wip"]],
    "subject-case": [0, "always", []],
    "subject-max-length": [2, "always", 50],
  },
};
