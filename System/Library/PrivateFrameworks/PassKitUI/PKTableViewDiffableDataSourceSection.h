//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKIdentifiable-Protocol.h>

@class NSString;
@protocol NSCopying;

@interface PKTableViewDiffableDataSourceSection : NSObject <PKIdentifiable>
{
    id <NSCopying> _identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_footer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000489f7
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) id <NSCopying> identifier; // @synthesize identifier=_identifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048898
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000048825

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

