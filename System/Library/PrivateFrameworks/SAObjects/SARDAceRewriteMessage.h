//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SARDAceRewriteMessage <SAAceSerializable>
{
}

@property(copy, nonatomic) NSString *rewrittenUtterance;
@property(copy, nonatomic) NSString *rewriteType;
- (id)encodedClassName;	// IMP=0x000000000003b787
- (id)groupIdentifier;	// IMP=0x000000000003b773

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

