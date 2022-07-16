//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _NAUINamedViewConstraints : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSArray *_constraints;	// 16 = 0x10
    id _stalenessToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000ab2f
@property(readonly, copy, nonatomic) id stalenessToken; // @synthesize stalenessToken=_stalenessToken;
@property(readonly, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 constraints:(id)arg2 stalenessToken:(id)arg3;	// IMP=0x000000000000aa27

@end

