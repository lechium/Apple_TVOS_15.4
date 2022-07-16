//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString, SAMLSignature, SAMLSubject;

__attribute__((visibility("hidden")))
@interface SAMLAttributeQueryElement
{
}

+ (id)createElement:(id *)arg1;	// IMP=0x000000000000349d
- (void)addAttribute:(id)arg1;	// IMP=0x0000000000003d07
@property(readonly, nonatomic) NSArray *samlAttributes;
@property(retain, nonatomic) SAMLSubject *subject;
@property(readonly, nonatomic) SAMLSignature *signature;
@property(retain, nonatomic) NSString *channelId;
@property(readonly, nonatomic) NSString *consent;
@property(readonly, nonatomic) NSString *destination;
@property(readonly, nonatomic) NSDate *issueInstant;
@property(readonly, nonatomic) NSString *identifier;

@end

