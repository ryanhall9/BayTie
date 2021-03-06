//
//  ReservationResMainViewController.h
//  Baytie
//
//  Created by stepanekdavid on 9/14/16.
//  Copyright © 2016 Lovisa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ReservationResMainViewController : UIViewController<UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>{

    IBOutlet UIView *navView;
    __weak IBOutlet UITableView *reservationResTableView;
    __weak IBOutlet UISearchBar *restroSearchBar;
    
    __weak IBOutlet UIButton *btnFilterAll;
    __weak IBOutlet UIButton *btnFilterFeatured;
    __weak IBOutlet UIButton *btnFilterPromo;
    __weak IBOutlet UIButton *btnFilterRating;
}
- (IBAction)onMenu:(id)sender;
- (IBAction)onBack:(id)sender;
@property (nonatomic, retain) NSMutableArray *foundRestroLists;
@property (nonatomic, retain) NSString *areaId;
@property (nonatomic, retain) NSString *persionsNumber;
@property (nonatomic, retain) NSString *dateForReservation;
@property (nonatomic, retain) NSString *timeForReservation;
@property (nonatomic, retain) NSString *dateForReserveTimes;

- (IBAction)onFilterAll:(id)sender;
- (IBAction)onFilterFeatured:(id)sender;
- (IBAction)onFilterPromo:(id)sender;
- (IBAction)onFilterRating:(id)sender;
@end
