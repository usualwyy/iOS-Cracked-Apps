//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "UITableViewDelegate.h"
#import "UIWebViewDelegate.h"

@class ETBaseSource, NSIndexPath, UIScrollView, UITableView;

@protocol ETBaseTableViewDelegate <UIWebViewDelegate, UITableViewDelegate, NSObject>

@optional
- (void)tableView:(UITableView *)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)headerViewRefresh;
- (void)didSelectRowAtIndexPath:(ETBaseSource *)arg1;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
@end

