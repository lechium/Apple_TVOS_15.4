//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface CKKSLaunchEvent : NSObject
{
    unsigned int _counter;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001caae7
@property unsigned int counter; // @synthesize counter=_counter;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001ca990
- (id)initWithName:(id)arg1;	// IMP=0x00100000001ca8f4

@end
