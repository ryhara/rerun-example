"use strict";
// https://github.com/SF-28/git_hooks_sample/blob/main/.cz_config.js
module.exports = {
  types: [
		{
			value: '🧪 experiment',
			name: '🧪 experiment: 実験を回すタイミング',
			title: 'Experiments',
		},
    {
      value: "✨ feat",
      name: "✨ feat:     新機能",
      title: "Features",
    },
    {
      value: "🐛 fix",
      name: "🐛 fix:      バグ修正",
      title: "Bug Fixes",
    },
    {
      value: "📝 docs",
      name: "📝 docs:     ドキュメントの変更",
      title: "Documentation",
    },
		{
			value: '🔧 setting',
			name: '🔧 setting:     環境構築',
			title: 'Settings',
		},
    {
      value: "🎨 style",
      name: "🎨 style:    フォーマットの変更（コードの動作に影響しないスペース、フォーマット、セミコロンなどの変更）",
      title: "Styles",
    },
    {
      value: "🔥 remove",
      name: "🔥 remove:   コードやファイルの削除",
      title: "Removes",
    },
    {
      value: "🚧 wip",
      name: "🚧 wip:      作業中の内容",
      title: "WIPs",
    },
  ],

  messages: {
    type: "コミットタイプを選択:\n",
    subject: "変更内容の要約:\n",
    confirmCommit: "この内容でコミットしてよろしいですか?",
  },
};
