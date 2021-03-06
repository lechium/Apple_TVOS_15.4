//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface ENWebResource : NSObject
{
    NSData *_data;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSString *_MIMEType;	// 24 = 0x18
    NSString *_textEncodingName;	// 32 = 0x20
    NSString *_frameName;	// 40 = 0x28
}

+ (id)webResourceWithDictionary:(id)arg1;	// IMP=0x000000000023e170
- (void).cxx_destruct;	// IMP=0x000000000023e127
@property(copy, nonatomic) NSString *frameName; // @synthesize frameName=_frameName;
@property(copy, nonatomic) NSString *textEncodingName; // @synthesize textEncodingName=_textEncodingName;
@property(copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)propertyList;	// IMP=0x000000000023de4b
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;	// IMP=0x000000000023dd37

@end

