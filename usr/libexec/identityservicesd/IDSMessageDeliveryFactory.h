//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSMessageDeliveryFactory : NSObject
{
}

+ (id)sharedFactory;	// IMP=0x0020000000341ce0
- (id)createAPNSMessageDelivery;	// IMP=0x0020000000341e10
- (id)createHTTPMessageDelivery;	// IMP=0x0010000000341dd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

