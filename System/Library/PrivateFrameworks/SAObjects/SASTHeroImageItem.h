//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SADecoratedString, SAUINanoImageResource;

@interface SASTHeroImageItem <SASTTemplateItem>
{
}

+ (id)heroImageItemWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000a113
+ (id)heroImageItem;	// IMP=0x000000000000a101
@property(retain, nonatomic) SAUINanoImageResource *watchImageResource;
@property(copy, nonatomic) NSString *position;
@property(retain, nonatomic) SADecoratedString *caption;
- (id)encodedClassName;	// IMP=0x000000000000a0f4
- (id)groupIdentifier;	// IMP=0x000000000000a0e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

