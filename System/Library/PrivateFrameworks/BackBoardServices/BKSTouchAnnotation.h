//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface BKSTouchAnnotation : NSObject <NSSecureCoding, BSDescriptionProviding>
{
    unsigned int _touchIdentifier;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    NSString *_uniqueIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008803
- (void).cxx_destruct;	// IMP=0x00000000000087db
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned int touchIdentifier; // @synthesize touchIdentifier=_touchIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000086a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008618
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000008578
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000008528
- (id)succinctDescriptionBuilder;	// IMP=0x000000000000850c
- (id)succinctDescription;	// IMP=0x00000000000084bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

