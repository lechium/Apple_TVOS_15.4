//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CalBirthdayListener;

__attribute__((visibility("hidden")))
@interface CADBirthdayListener : NSObject
{
    id <CalBirthdayListener> _ekBirthdayListener;	// 8 = 0x8
    Class _listenerClass;	// 16 = 0x10
}

+ (_Bool)birthdayCalendarEnabled;	// IMP=0x000000000003b979
+ (void)setBirthdayCalendarEnabled:(_Bool)arg1;	// IMP=0x000000000003b926
+ (void)reset;	// IMP=0x000000000003b7f8
+ (void)start;	// IMP=0x000000000003b765
+ (id)sharedListener;	// IMP=0x000000000003b710
- (void).cxx_destruct;	// IMP=0x000000000003b9fa
@property(retain, nonatomic) Class listenerClass; // @synthesize listenerClass=_listenerClass;
@property(retain, nonatomic) id <CalBirthdayListener> ekBirthdayListener; // @synthesize ekBirthdayListener=_ekBirthdayListener;
- (_Bool)birthdayCalendarEnabled;	// IMP=0x000000000003b910
- (void)setBirthdayCalendarEnabled:(_Bool)arg1;	// IMP=0x000000000003b8b6
- (void)reset;	// IMP=0x000000000003b879
- (void)start;	// IMP=0x000000000003b83c
- (id)init;	// IMP=0x000000000003b681

@end

