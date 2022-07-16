//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardLineFactory-Protocol.h>

@class NSString;

@interface CNVCardLineFactory : NSObject <CNVCardLineFactory>
{
}

+ (id)version21LineFactory;	// IMP=0x000000000001b44e
+ (id)version30LineFactory;	// IMP=0x000000000001b435
- (id)versionPlaceholderLine;	// IMP=0x000000000001b4e4
- (id)lineWithLiteralValue:(id)arg1;	// IMP=0x000000000001b4cb
- (id)dataLineWithName:(id)arg1 value:(id)arg2;	// IMP=0x000000000001b4b2
- (id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;	// IMP=0x000000000001b499
- (id)arrayLineWithName:(id)arg1 value:(id)arg2;	// IMP=0x000000000001b480
- (id)stringLineWithName:(id)arg1 value:(id)arg2;	// IMP=0x000000000001b467

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
