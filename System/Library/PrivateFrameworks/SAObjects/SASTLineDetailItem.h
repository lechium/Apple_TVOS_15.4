//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTLineDetailItem <SASTTemplateItem>
{
}

+ (id)lineDetailItemWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000011623
+ (id)lineDetailItem;	// IMP=0x0000000000011611
@property(retain, nonatomic) SAUIDecoratedText *title;
- (id)encodedClassName;	// IMP=0x0000000000011604
- (id)groupIdentifier;	// IMP=0x00000000000115f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
