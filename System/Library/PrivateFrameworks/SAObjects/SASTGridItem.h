//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSArray, NSString;

@interface SASTGridItem <SASTTemplateItem>
{
}

+ (id)gridItemWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000025a59
+ (id)gridItem;	// IMP=0x0000000000025a47
@property(copy, nonatomic) NSArray *gridCells;
- (id)encodedClassName;	// IMP=0x0000000000025a3a
- (id)groupIdentifier;	// IMP=0x0000000000025a26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

