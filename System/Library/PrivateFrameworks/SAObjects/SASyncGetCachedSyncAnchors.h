//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SASyncGetCachedSyncAnchors
{
}

+ (id)getCachedSyncAnchorsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000012e13
+ (id)getCachedSyncAnchors;	// IMP=0x0000000000012e01
- (_Bool)mutatingCommand;	// IMP=0x0000000000012e47
- (_Bool)requiresResponse;	// IMP=0x0000000000012e3f
@property(copy, nonatomic) NSString *interactionId;
- (id)encodedClassName;	// IMP=0x0000000000012df4
- (id)groupIdentifier;	// IMP=0x0000000000012de0

@end

