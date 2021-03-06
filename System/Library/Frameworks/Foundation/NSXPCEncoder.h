//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSXPCConnection;
@protocol NSXPCEncoderDelegate, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NSXPCEncoder
{
    NSObject<OS_xpc_object> *_oolObjects;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    struct __CFDictionary *_replacedByDelegateObjects;	// 40 = 0x28
    id <NSXPCEncoderDelegate> _delegate;	// 48 = 0x30
    struct {
        unsigned long long collectionSizeOffset[1024];
        long long collectionRecursionIndex;
        unsigned long long dataLen;
        unsigned long long dataSize;
        char *data;
        struct __CFDictionary *_objectReferences;
        struct __CFDictionary *_stringReferences;
        struct __CFDictionary *_asciiReferences;
        _Bool isVM;
        _Bool isStack;
    } _encoder;	// 56 = 0x38
    unsigned long long _genericIndex;	// 8312 = 0x2078
    _Bool _topLevelDictionary;	// 8320 = 0x2080
    _Bool _finished;	// 8321 = 0x2081
    _Bool _askForReplacement;	// 8322 = 0x2082
}

@property id <NSXPCEncoderDelegate> delegate; // @synthesize delegate=_delegate;
@property NSXPCConnection *_connection; // @synthesize _connection;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000223f01
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000223eaf
- (unsigned long long)_addOOLXPCObject:(id)arg1;	// IMP=0x0000000000223e19
- (void)_encodeCString:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x0000000000223dd2
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x0000000000223d00
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000223ccd
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x0000000000223c95
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x0000000000223c5d
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000223c2a
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x0000000000223bf7
- (void)encodeInt:(int)arg1 forKey:(id)arg2;	// IMP=0x0000000000223bc4
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000000223b91
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000223a58
- (void)_encodeInvocationObjectArgumentsOnly:(id *)arg1 count:(unsigned long long)arg2 typeString:(const char *)arg3 selector:(SEL)arg4 isReply:(_Bool)arg5 into:(id)arg6;	// IMP=0x00000000002238d6
- (void)_encodeInvocation:(id)arg1 isReply:(_Bool)arg2 into:(id)arg3;	// IMP=0x000000000022371a
- (id)_newRootXPCObject;	// IMP=0x000000000022364c
- (void)_startTopLevelDictionary;	// IMP=0x0000000000223630
- (void)_encodeUnkeyedObject:(id)arg1;	// IMP=0x00000000002235e3
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000223570
- (void)_encodeObject:(id)arg1;	// IMP=0x00000000002232be
- (void)_checkObject:(id)arg1;	// IMP=0x000000000022312f
- (id)_replaceObject:(id)arg1;	// IMP=0x0000000000222f9c
- (void)encodeObject:(id)arg1;	// IMP=0x0000000000222f88
- (void)encodeDataObject:(id)arg1;	// IMP=0x0000000000222f76
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;	// IMP=0x0000000000222f21
- (_Bool)allowsKeyedCoding;	// IMP=0x0000000000222f19
- (id)debugDescription;	// IMP=0x0000000000222ec7
- (void)dealloc;	// IMP=0x0000000000222e25
- (id)init;	// IMP=0x0000000000222e0f
- (id)initWithStackSpace:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000222d8d
- (id)connection;	// IMP=0x0000000000222d6f

@end

