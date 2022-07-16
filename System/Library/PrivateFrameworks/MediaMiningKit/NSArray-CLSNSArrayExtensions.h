//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

#import <MediaMiningKit/CLSCurationDebugItemCluster-Protocol.h>

@class NSString;

@interface NSArray (CLSNSArrayExtensions) <CLSCurationDebugItemCluster>
- (id)anyObject;	// IMP=0x000000000005b7db
- (id)map:(CDUnknownBlockType)arg1;	// IMP=0x000000000005b63b
- (id)flattenWithSeparator:(id)arg1;	// IMP=0x000000000005b513
- (id)indentBy:(unsigned long long)arg1 withSeparator:(id)arg2;	// IMP=0x000000000005b3b3
@property(readonly) NSArray *clsCurationItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
