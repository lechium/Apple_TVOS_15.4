//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ICLiveLinkQueueEventContentAdded : NSObject
{
    NSString *_containerIdentifier;	// 8 = 0x8
    long long _containerKind;	// 16 = 0x10
    NSString *_containerMediaIdentifier;	// 24 = 0x18
    NSArray *_itemIdentifiers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000017c3df
@property(readonly, copy, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(readonly, copy, nonatomic) NSString *containerMediaIdentifier; // @synthesize containerMediaIdentifier=_containerMediaIdentifier;
@property(readonly, nonatomic) long long containerKind; // @synthesize containerKind=_containerKind;
@property(readonly, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (id)description;	// IMP=0x000000000017c309
- (id)initWithItemIdentifiers:(id)arg1 containerKind:(long long)arg2 containerIdentifier:(id)arg3 containerMediaIdentifier:(id)arg4;	// IMP=0x000000000017c217

@end

