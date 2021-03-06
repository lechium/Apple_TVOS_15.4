//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface ASIdentifierManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x000000000000185a
- (void)clearAdvertisingIdentifier;	// IMP=0x0000000000001c3a
@property(readonly, nonatomic) NSUUID *advertisingIdentifier;
@property(readonly, nonatomic, getter=isAdvertisingTrackingEnabled) _Bool advertisingTrackingEnabled;
- (_Bool)isUserOptedIn;	// IMP=0x0000000000001873

@end

