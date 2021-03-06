//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CNVCardParsedParameter : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSArray *_values;	// 16 = 0x10
}

+ (id)parameterWithName:(id)arg1 values:(id)arg2;	// IMP=0x000000000000f619
- (void).cxx_destruct;	// IMP=0x000000000000f867
@property(readonly, copy) NSArray *values; // @synthesize values=_values;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x000000000000f74d
- (id)initWithName:(id)arg1 values:(id)arg2;	// IMP=0x000000000000f685

@end

