//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSArray, NSString;

@interface SASTImageCollectionItem <SASTTemplateItem>
{
}

+ (id)imageCollectionItemWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002667a
+ (id)imageCollectionItem;	// IMP=0x0000000000026668
@property(copy, nonatomic) NSArray *images;
- (id)encodedClassName;	// IMP=0x000000000002665b
- (id)groupIdentifier;	// IMP=0x0000000000026647

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

