//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriUIFoundation/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;

@interface SRUIFStack : NSObject <NSCopying>
{
    NSMutableArray *_elements;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000015d04
@property(readonly, nonatomic, getter=_elements) NSMutableArray *elements; // @synthesize elements=_elements;
- (id)copy;	// IMP=0x0000000000015ce6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015cdb
@property(readonly, copy, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) id topObject;
- (id)init;	// IMP=0x0000000000015c2a
- (id)initWithStack:(id)arg1;	// IMP=0x0000000000015bd4
- (id)initWithArray:(id)arg1;	// IMP=0x0000000000015b17

@end

