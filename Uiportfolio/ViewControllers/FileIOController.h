//
//  FileIOController.h
//  Uiportfolio
//
//  Created by Prathipati, Akshit on 11/13/19.
//  Copyright © 2019 JM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FileIOController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *tableData;
}

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@end
