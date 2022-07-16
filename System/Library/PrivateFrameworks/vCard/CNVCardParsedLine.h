//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CNVCardParsedLine : NSObject
{
    NSString *_name;	// 8 = 0x8
    id _value;	// 16 = 0x10
    NSArray *_parameters;	// 24 = 0x18
    NSString *_grouping;	// 32 = 0x20
    _Bool _isPrimary;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000f32f
@property(copy) NSString *grouping; // @synthesize grouping=_grouping;
@property _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(copy) NSArray *parameters; // @synthesize parameters=_parameters;
@property(retain) id value; // @synthesize value=_value;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x000000000000f1d6
- (id)initWithName:(id)arg1;	// IMP=0x000000000000f14c

@end

