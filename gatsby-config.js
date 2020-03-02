module.exports = {
  siteMetadata: {
    title: 'QURI',
    author: 'Ozzie Gooen',
  },
  plugins: [
    'gatsby-plugin-react-helmet',
    {
      resolve: `gatsby-plugin-manifest`,
      options: {
        name: 'quri',
        short_name: 'quri-reasonml',
        start_url: '/',
        background_color: '#333',
        theme_color: '#333',
        display: 'minimal-ui',
        icon: 'src/images/gatsby-icon.png', // This path is relative to the root of the site.
      },
    },
    {
      resolve: `gatsby-source-filesystem`,
      options: {
        name: `pages`,
        path: `${__dirname}/src/pages`,
      },
    },
    'gatsby-transformer-remark',
    'gatsby-plugin-offline',
  ],
}
