//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileInstallation/NSCopying-Protocol.h>

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MICandidateContainer : NSObject <NSCopying>
{
    NSURL *_rootURL;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSDictionary *_metadata;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000025319
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSURL *rootURL; // @synthesize rootURL=_rootURL;
- (unsigned long long)hash;	// IMP=0x000000000002523a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000025087
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024fc8
@property(readonly, nonatomic) _Bool isAppleApp;
@property(readonly, nonatomic) long long estimatedSize;
- (id)initWithContainerURL:(id)arg1 identifier:(id)arg2 metadata:(id)arg3;	// IMP=0x0000000000024dbd

@end

