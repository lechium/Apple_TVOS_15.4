//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/NSCoding-Protocol.h>
#import <WebKitLegacy/NSCopying-Protocol.h>

@class NSData, NSString, NSURL, WebResourcePrivate;

@interface WebResource : NSObject <NSCoding, NSCopying>
{
    WebResourcePrivate *_private;	// 8 = 0x8
}

- (id)description;	// IMP=0x0000000000124990
@property(readonly, copy, nonatomic) NSString *frameName;
@property(readonly, copy, nonatomic) NSString *textEncodingName;
@property(readonly, copy, nonatomic) NSString *MIMEType;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSData *data;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001247a0
- (void)dealloc;	// IMP=0x0000000000124760
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000124550
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000123ee0
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;	// IMP=0x0000000000123eb0
- (id)init;	// IMP=0x0000000000123e60
- (NakedRef_f8818be1)_coreResource;	// IMP=0x0000000000124a60
- (id)_initWithCoreResource:(void *)arg1;	// IMP=0x00000000001249f0
- (id)_stringValue;	// IMP=0x0000000000125140
- (id)_response;	// IMP=0x0000000000125100
- (id)_suggestedFilename;	// IMP=0x0000000000125060
- (id)_initWithData:(id)arg1 URL:(id)arg2 response:(id)arg3;	// IMP=0x0000000000124fe0
- (id)_initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 response:(id)arg6 copyData:(_Bool)arg7;	// IMP=0x0000000000124a90
- (void)_ignoreWhenUnarchiving;	// IMP=0x0000000000124a70

@end

