//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface IMTunesController : NSObject
{
    NSDate *_lastChange;	// 8 = 0x8
    NSDictionary *_lastInfo;	// 16 = 0x10
    NSMutableDictionary *_playerInfo;	// 24 = 0x18
    NSMutableArray *_listeners;	// 32 = 0x20
    NSString *_messageFormat;	// 40 = 0x28
}

+ (id)sharedTunesController;	// IMP=0x000000000003f492
@property(nonatomic) NSMutableDictionary *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(readonly, nonatomic) NSString *messageFormat;
- (void)removeListener:(id)arg1;	// IMP=0x000000000003fc28
- (void)addListener:(id)arg1;	// IMP=0x000000000003fc22
- (void)_playerChangedNotification:(id)arg1;	// IMP=0x000000000003fb01
- (void)_playerChanged:(id)arg1;	// IMP=0x000000000003f724
- (void)_updateMessage;	// IMP=0x000000000003f5b9
@property(readonly, nonatomic) _Bool isEnabled;
- (void)dealloc;	// IMP=0x000000000003f550
- (id)init;	// IMP=0x000000000003f521

@end
