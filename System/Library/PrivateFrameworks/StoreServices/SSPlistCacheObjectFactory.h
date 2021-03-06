//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/SSCacheObjectFactory-Protocol.h>

@class NSString;

@interface SSPlistCacheObjectFactory : NSObject <SSCacheObjectFactory>
{
}

- (id)cachedObjectWithDataRepresentation:(id)arg1 typeIdentifier:(id)arg2;	// IMP=0x000000000015e8ea
- (_Bool)supportsTypeIdentifier:(id)arg1;	// IMP=0x000000000015e8b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

