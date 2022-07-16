//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>

@class CKVItemInfo, NSSet;

@interface CKVSpanMatchResult : NSObject <NSCopying>
{
    CKVItemInfo *_itemInfo;	// 8 = 0x8
    NSSet *_spanMatches;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008797b
@property(readonly, nonatomic) NSSet *spanMatches; // @synthesize spanMatches=_spanMatches;
@property(readonly, nonatomic) CKVItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
- (unsigned long long)hash;	// IMP=0x0000000000087928
- (_Bool)isEqualToSpanMatchResult:(id)arg1;	// IMP=0x0000000000087874
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008780c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000087788
- (id)description;	// IMP=0x000000000008770c
- (id)init;	// IMP=0x00000000000876c4
- (id)initWithItemInfo:(id)arg1 spanMatches:(id)arg2;	// IMP=0x0000000000087507

@end

