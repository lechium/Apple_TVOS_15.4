//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ML3QuerySection : NSObject
{
    unsigned long long _sectionIndex;	// 8 = 0x8
    struct _NSRange _range;	// 16 = 0x10
}

@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009b2e3
- (unsigned long long)hash;	// IMP=0x000000000009b2d1
- (id)description;	// IMP=0x000000000009b222
- (id)initWithRange:(struct _NSRange)arg1 sectionIndex:(unsigned long long)arg2;	// IMP=0x000000000009b1cf

@end

