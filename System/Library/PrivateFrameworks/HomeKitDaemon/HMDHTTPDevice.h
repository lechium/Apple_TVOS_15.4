//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString, NSUUID;

@interface HMDHTTPDevice : HMFObject <HMFLogging>
{
    NSUUID *_identifier;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x000000000036b271
+ (id)shortDescription;	// IMP=0x000000000036b25f
- (void).cxx_destruct;	// IMP=0x000000000036b24c
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;	// IMP=0x000000000036b1eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000036b12d
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x000000000036af93
- (id)shortDescription;	// IMP=0x000000000036aed1
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000036ad52
- (id)init;	// IMP=0x000000000036acf8

// Remaining properties
@property(readonly) Class superclass;

@end
