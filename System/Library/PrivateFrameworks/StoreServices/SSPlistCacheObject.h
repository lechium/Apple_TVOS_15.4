//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/SSCacheObject-Protocol.h>

@class NSDictionary, NSString;

@interface SSPlistCacheObject : NSObject <SSCacheObject>
{
    NSDictionary *_plist;	// 8 = 0x8
}

+ (id)cacheObjectTypeIdentifier;	// IMP=0x000000000015e920
- (void)dealloc;	// IMP=0x000000000015ea09
- (id)initWithCacheObjectDataRepresentation:(id)arg1;	// IMP=0x000000000015e9b6
- (id)cacheObjectDataRepresentation;	// IMP=0x000000000015e98b
- (id)cacheObjectTypeIdentifier;	// IMP=0x000000000015e972
- (id)plist;	// IMP=0x000000000015e95b
- (void)setPlist:(id)arg1;	// IMP=0x000000000015e92d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

