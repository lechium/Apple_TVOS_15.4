//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASyncWrap-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface SAReminderListObjectWrapper <SASyncWrap>
{
}

+ (id)listObjectWrapperWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000013ddc
+ (id)listObjectWrapper;	// IMP=0x0000000000013dca
@property(copy, nonatomic) NSNumber *generation;
- (id)encodedClassName;	// IMP=0x0000000000013dbd
- (id)groupIdentifier;	// IMP=0x0000000000013da9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSURL *identifier; // @dynamic identifier;
@property(readonly) Class superclass;

@end

