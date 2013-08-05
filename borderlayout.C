#include <Wt/WContainerWidget>
#include <Wt/WBorderLayout>
#include <Wt/WText>
#include<Wt/WApplication>
#include<Wt/WImage>
#include<Wt/WAnchor>
using namespace Wt;
class student : public WApplication
{
 public:
student(const WEnvironment & env):WApplication(env)
{
 useStyleSheet("style.css");
 //Creates a container on root.
 Wt::WContainerWidget *container = new Wt::WContainerWidget(root());
 //height of container
 container->setHeight(700);
 //set style class to container
 container->setStyleClass("yellow-box");

//Makes a layout object of WBorderLayout. You used it to handle the layout of container

Wt::WBorderLayout *layout = new Wt::WBorderLayout();
container->setLayout(layout);

const char *cell = "{1} ";
//Added text at the top
Wt::WText *item = new Wt::WText(Wt::WString(cell).arg("<h1> Layout Managers</h1>"));
item->setStyleClass("black-box");
layout->addWidget(item, Wt::WBorderLayout::North);

//Added Image in the West

Wt::WImage *image = new Wt::WImage("manmeet.png", root());
item->setStyleClass("blue-box");
image->setHeight(300);
image->setWidth(600);
layout->addWidget(image, Wt::WBorderLayout::West);


item = new Wt::WText(Wt::WString(cell).arg(""));
item->setStyleClass("no-box");
layout->addWidget(item, Wt::WBorderLayout::East);

item = new Wt::WText(Wt::WString(cell).arg(""));
item->setStyleClass("no-box");
layout->addWidget(item, Wt::WBorderLayout::South);

//Added text in center

item = new Wt::WText(Wt::WString(cell).arg(" Usually, CSS is a sufficient and convenient way to indicate how to layout widgets within a container widget, and we recommend to get accustomed with CSS for basic layout and styling.There are however several situations when CSS is not effective to create a layout, especially for complex web applications. In particular, when placing contents within a dialog it is often necessary to adjust its contents to available vertical space, and it is often desirable to distribute excess space to a particular widget while keeping other widgets to their preferred size. It is for these reasons that Wt has a comprehensive set of layout managers that use JavaScript to compute and apply layout managent to children of a WContainerWidget.Wt provides the typical box, grid or border layout management options and layout managers and CSS can safely be intermixed. "));
item->setStyleClass("green-box");
layout->addWidget(item, Wt::WBorderLayout::Center);


}
};
WApplication *createapplication(const WEnvironment& env)
{
return new student(env);
}
int main(int argc, char ** argv)
{
 return WRun(argc, argv, &createapplication);
}
