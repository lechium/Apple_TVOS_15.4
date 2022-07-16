//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMessage;

@interface MFMessageBody : NSObject
{
    MFMessage *_message;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x000000000001841b
- (id)textHtmlPart;	// IMP=0x0000000000018413
- (id)attachmentURLs;	// IMP=0x00000000000183c0
- (id)attachments;	// IMP=0x000000000001836d
- (unsigned int)numberOfAttachmentsSigned:(_Bool *)arg1 encrypted:(_Bool *)arg2;	// IMP=0x0000000000018365
- (id)message;	// IMP=0x000000000001835b
- (void)setMessage:(id)arg1;	// IMP=0x0000000000018324
- (_Bool)isRich;	// IMP=0x000000000001831c
- (_Bool)isHTML;	// IMP=0x0000000000018314
- (id)htmlContent;	// IMP=0x00000000000182f6
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 asHTML:(_Bool)arg3 isComplete:(_Bool *)arg4;	// IMP=0x00000000000182ee
- (id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;	// IMP=0x00000000000182d6
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 asHTML:(_Bool)arg3;	// IMP=0x00000000000182c1
- (id)rawData;	// IMP=0x00000000000182ab

@end
