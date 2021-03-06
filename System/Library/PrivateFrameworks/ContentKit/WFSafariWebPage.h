//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>

@class NSData, NSString, NSURL;

@interface WFSafariWebPage : NSObject <NSCopying, WFNaming, NSSecureCoding>
{
    NSURL *_URL;	// 8 = 0x8
    NSString *_pageTitle;	// 16 = 0x10
    NSData *_documentHTML;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009f70d
- (void).cxx_destruct;	// IMP=0x000000000009f6da
@property(readonly, copy, nonatomic) NSData *documentHTML; // @synthesize documentHTML=_documentHTML;
@property(readonly, copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009f5d9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009f4e1
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009f4c4
@property(readonly, copy, nonatomic) NSData *selectionHTML;
@property(readonly, copy, nonatomic) NSString *selectionText;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 documentHTML:(id)arg3;	// IMP=0x000000000009f2a9

@end

