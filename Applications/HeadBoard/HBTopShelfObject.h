//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HBTopShelfObject : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000694cc
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000006944a
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000069386
- (id)succinctDescriptionBuilder;	// IMP=0x00100000000692b8
- (id)succinctDescription;	// IMP=0x0010000000069268
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;	// IMP=0x001000000006919b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

