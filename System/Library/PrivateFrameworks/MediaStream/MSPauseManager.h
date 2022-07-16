//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol MSPauseManagerDelegate;

@interface MSPauseManager : NSObject
{
    NSMutableDictionary *_UUIDToTimerMap;	// 8 = 0x8
    id <MSPauseManagerDelegate> _delegate;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00000000000074c5
- (void).cxx_destruct;	// IMP=0x0000000000007482
@property(nonatomic) __weak id <MSPauseManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unpauseUUID:(id)arg1;	// IMP=0x0000000000007449
- (void)_timerDidFire:(id)arg1;	// IMP=0x000000000000732d
- (void)_removeTimerUUID:(id)arg1;	// IMP=0x0000000000007223
- (void)pingPauseUUID:(id)arg1;	// IMP=0x0000000000007051
- (void)_addPauseUUID:(id)arg1;	// IMP=0x0000000000006f03
- (_Bool)isPaused;	// IMP=0x0000000000006ee6
- (void)dealloc;	// IMP=0x0000000000006d86
- (id)init;	// IMP=0x0000000000006d30

@end

