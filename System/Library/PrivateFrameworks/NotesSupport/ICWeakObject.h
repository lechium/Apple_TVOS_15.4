//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesSupport/NSCopying-Protocol.h>

@interface ICWeakObject : NSObject <NSCopying>
{
    id _object;	// 8 = 0x8
    unsigned long long _cachedHash;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002038b
@property(nonatomic) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
- (id)description;	// IMP=0x00000000000202b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000201f2
- (unsigned long long)hash;	// IMP=0x00000000000201e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000201d5
- (id)initWithObject:(id)arg1;	// IMP=0x000000000002016d

@end

