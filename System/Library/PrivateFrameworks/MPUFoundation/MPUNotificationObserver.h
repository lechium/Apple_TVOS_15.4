//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MPUNotificationObserver : NSObject
{
    id _notificationObservationToken;	// 8 = 0x8
}

+ (id)observerWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000019aaf
- (void).cxx_destruct;	// IMP=0x0000000000019d11
@property(retain, nonatomic) id notificationObservationToken; // @synthesize notificationObservationToken=_notificationObservationToken;
- (void)dealloc;	// IMP=0x0000000000019c5b
- (id)initWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000019b59

@end

