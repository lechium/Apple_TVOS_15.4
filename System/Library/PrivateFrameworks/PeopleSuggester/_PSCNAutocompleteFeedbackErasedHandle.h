//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class CNContact;

@interface _PSCNAutocompleteFeedbackErasedHandle : NSObject <NSSecureCoding>
{
    CNContact *_contact;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000028150
- (void).cxx_destruct;	// IMP=0x0000000000028162
@property(readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002812d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028083
- (id)initWithContact:(id)arg1;	// IMP=0x0000000000028018

@end
