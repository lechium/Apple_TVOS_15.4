//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTActionableTemplateItem-Protocol.h>

@class NSArray, NSString, SAUIDecoratedText, SAUINanoImageResource;
@protocol SASTTemplateAction;

@interface SASTColumnDataListItem <SASTActionableTemplateItem>
{
}

+ (id)columnDataListItemWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000021c25
+ (id)columnDataListItem;	// IMP=0x0000000000021c13
@property(retain, nonatomic) SAUIDecoratedText *title;
@property(copy, nonatomic) NSString *rowLayout;
@property(retain, nonatomic) SAUINanoImageResource *imageResource;
@property(copy, nonatomic) NSArray *decoratedRows;
@property(retain, nonatomic) id <SASTTemplateAction> action; // @dynamic action;
- (id)encodedClassName;	// IMP=0x0000000000021c06
- (id)groupIdentifier;	// IMP=0x0000000000021bf2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

