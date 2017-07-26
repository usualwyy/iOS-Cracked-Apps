//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CNDateUtil : NSObject
{
}

+ (_Bool)isValidWithStartTime:(id)arg1 endTime:(id)arg2;
+ (id)dateToMMddString:(id)arg1;
+ (id)dateToHHmmString:(id)arg1;
+ (id)dateToHHYYMMString:(id)arg1;
+ (_Bool)isDateEarlierThanBeforeYesterday:(id)arg1;
+ (_Bool)isDateBeforeYesterday:(id)arg1;
+ (_Bool)isDateTomorrow:(id)arg1;
+ (_Bool)isDateYesterday:(id)arg1;
+ (_Bool)isDateToday:(id)arg1;
+ (double)dayBeforeYesterdayStart;
+ (double)tomorrowStart;
+ (double)yesterdayStart;
+ (double)todayStart;
+ (id)dateString2FriendlyLogisticTime:(id)arg1;
+ (id)dateString2FriendlyLogisticTime:(id)arg1 withDateSplitor:(id)arg2;
+ (double)string2DateInterval:(id)arg1;
+ (id)date2FriendlyFormatString:(id)arg1;
+ (_Bool)dateLaterThan:(id)arg1 otherDate:(id)arg2;
+ (long long)dayIntervalSinceNow:(id)arg1;
+ (id)string2Date:(id)arg1;
+ (id)date2StringWithFormat:(id)arg1 format:(id)arg2;
+ (id)date2String:(id)arg1;
+ (id)getCurrentDateWithFormat:(id)arg1;
+ (id)getCurrentDateString;

@end

