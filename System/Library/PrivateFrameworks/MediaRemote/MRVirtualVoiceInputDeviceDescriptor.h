//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSMutableCopying-Protocol.h>

@class NSArray, NSData, NSDictionary, _MRVoiceInputDeviceDescriptorProtobuf;

__attribute__((visibility("hidden")))
@interface MRVirtualVoiceInputDeviceDescriptor : NSObject <NSMutableCopying>
{
    NSArray *_supportedFormats;	// 8 = 0x8
    NSDictionary *_defaultFormat;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002603b1
@property(readonly, nonatomic) NSDictionary *defaultFormat; // @synthesize defaultFormat=_defaultFormat;
@property(readonly, nonatomic) NSArray *supportedFormats; // @synthesize supportedFormats=_supportedFormats;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;	// IMP=0x0000000000260330
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002602fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002602d1
@property(readonly, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *protobuf;
@property(readonly, nonatomic) NSData *data;
- (id)description;	// IMP=0x000000000025ffea
- (id)initWithProtobuf:(id)arg1;	// IMP=0x000000000025fe02
- (id)initWithData:(id)arg1;	// IMP=0x000000000025fd84

@end

