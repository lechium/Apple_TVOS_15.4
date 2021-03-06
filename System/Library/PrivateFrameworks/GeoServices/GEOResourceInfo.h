//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOResource, NSArray, NSData, NSString;

@interface GEOResourceInfo : NSObject
{
    GEOResource *_resource;	// 8 = 0x8
    NSArray *_equivalentResources;	// 16 = 0x10
    NSString *_eTag;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000a3ac5d
@property(copy, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
@property(readonly, nonatomic) GEOResource *resource; // @synthesize resource=_resource;
@property(copy, nonatomic) NSArray *equivalentResources; // @synthesize equivalentResources=_equivalentResources;
- (id)description;	// IMP=0x0000000000a3ab62
- (_Bool)shouldCheckForUpdateForResourceAtPath:(id)arg1 useExtendedAttrs:(_Bool)arg2 forceUpdateCheck:(_Bool)arg3 log:(id)arg4;	// IMP=0x0000000000a3a81d
- (_Bool)validateResourceAtPath:(id)arg1 useExtendedAttrs:(_Bool)arg2 log:(id)arg3;	// IMP=0x0000000000a3a42a
- (_Bool)validateResource:(id)arg1 log:(id)arg2;	// IMP=0x0000000000a3a1b5
@property(readonly, nonatomic) int validationMethod;
@property(readonly, nonatomic) NSData *checksum;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) NSString *name;
- (id)initWithResource:(id)arg1;	// IMP=0x0000000000a3a0b7

@end

