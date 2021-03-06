//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPStoreSocialRequestOperationDataSource-Protocol.h>

@class MPModelSocialPerson, NSString;

__attribute__((visibility("hidden")))
@interface MPStoreSocialUnfollowOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource>
{
    MPModelSocialPerson *_person;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000022fdeb
@property(retain, nonatomic) MPModelSocialPerson *person; // @synthesize person=_person;
- (id)queryItems;	// IMP=0x000000000022fdc8
- (long long)httpMethod;	// IMP=0x000000000022fdbd
- (long long)httpBodyType;	// IMP=0x000000000022fdb2
- (id)httpBody;	// IMP=0x000000000022fc8b
- (id)bagKey;	// IMP=0x000000000022fc7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

