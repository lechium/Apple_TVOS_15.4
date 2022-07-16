//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSFileWrapper, NSString;

@interface _WKAttachmentInfo : NSObject
{
    struct RetainPtr<NSFileWrapper> _fileWrapper;	// 8 = 0x8
    struct RetainPtr<NSString> _mimeType;	// 16 = 0x10
    struct RetainPtr<NSString> _utiType;	// 24 = 0x18
    struct RetainPtr<NSString> _filePath;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000278aa7
- (void).cxx_destruct;	// IMP=0x0000000000278a3d
@property(readonly, nonatomic) NSString *contentType;
@property(readonly, nonatomic) NSFileWrapper *fileWrapper;
@property(readonly, nonatomic) NSString *filePath;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSData *data;
- (id)initWithFileWrapper:(id)arg1 filePath:(id)arg2 mimeType:(id)arg3 utiType:(id)arg4;	// IMP=0x0000000000278893

@end

