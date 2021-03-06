//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CDBAttachmentInfo : NSObject
{
    NSURL *_legacyURL;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSString *_localRelativePath;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000242c7
@property(readonly, copy, nonatomic) NSString *localRelativePath; // @synthesize localRelativePath=_localRelativePath;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSURL *legacyURL; // @synthesize legacyURL=_legacyURL;
- (id)initWithLegacyURL:(id)arg1 url:(id)arg2 localRelativePath:(id)arg3;	// IMP=0x00000000000241c3

@end

