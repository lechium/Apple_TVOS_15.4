//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@interface RERule : NSObject <NSCopying>
{
    float _priority;	// 8 = 0x8
}

@property(nonatomic) float priority; // @synthesize priority=_priority;
- (id)description;	// IMP=0x00000000000b5bec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b5b9e
- (unsigned long long)hash;	// IMP=0x00000000000b5b74
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b5b09
- (id)init;	// IMP=0x00000000000b5ace

@end

